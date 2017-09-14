#ifndef CAFFE_Imresize_LAYER_HPP_
#define CAFFE_Imresize_LAYER_HPP_

#include <vector>

#include "caffe/blob.hpp"
#include "caffe/layer.hpp"
#include "caffe/proto/caffe.pb.h"


namespace caffe {


class ImresizeLayer : public Layer {
 public:
  explicit ImresizeLayer(const LayerParameter& param): Layer(param) {}
  

  virtual inline const char* type() const { return "Imresize"; }
	
	virtual void LayerSetUp(const vector<Blob*>& bottom, const vector<Blob*>& top);
  virtual void Reshape(const vector<Blob*>& bottom, const vector<Blob*>& top);
  virtual void Forward_gpu(const vector<Blob*>& bottom, const vector<Blob*>& top);
  virtual void Backward_gpu(const vector<Blob*>& top, const vector<Blob*>& bottom);
  virtual void SecForward_gpu(const vector<Blob*>& bottom, const vector<Blob*>& top);
 protected:
 	int stride;
 	int kernel_size;
 	int num_classes;
};

}  // namespace caffe

#endif  // CAFFE_Imresize_LAYER_HPP_
		
