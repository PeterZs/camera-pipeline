#include <vector>
using namespace std;
const uint K = 10;
void get_input();
float box_muller_trans(float x);
int i_parent(int i);
int i_left_child(int i);
int i_right_child(int i);
void swap_element(vector<vector<short>>* a, int b, int c);
void sift_down(vector<vector<short>> *a, int start, int end);
void heapify(vector<vector<short>>* a);
void sort_neighbors(vector<vector<short>*>* a);
vector<short>* get_neighbor_ssd(short frame, short x, short y);
short get_random_x_y();
vector<short>* get_random_coord();
void print_v_i(vector<short> v_i);
void print_coord(short* coord);
void initiate_neighbors(short frame);
void print_buffer(short x, short y, short x_i, short y_i, short c);
short get_random_x();
short get_random_y();
void fill_buffer(short x, short y, vector<vector<short>> neighbors);
vector<vector<short>> sort_neighbors(vector<vector<short>> neighbors); 
void push_in_heap(vector<vector<short>*>* heap, vector<short>* element); 
void print_offset_and_ssd(vector<short>* offset_ssd);
void random_search(short frame);
void print_neighbors(vector<vector<short>*>* heap);
void load_halide_functions(short frame);
void generate_random_offsets_and_ssds(short frame, short x, short y, vector<vector<short>*>* neighbors);
void propagate_scanline(short frame, short x, short y);
void propagate_reverse_scanline(short frame, short x, short y);
void propagate_neighbors(short frame);
short calculate_new_ssd(short frame, short x, short y, short x_i, short y_i, short ssd, char direction);
void maintain_size(vector<vector<short>*>* vector);
vector<vector<short>*>* get_neighbors(short x, short y);

//aknn.cpp
void interleave_propagate_and_random_search(short frame);

//optical_flow.cpp
#include "opencv2/video/tracking.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
vector<Point2f> get_offset(Point2f point, short current_frame, short next_frame_offset);
