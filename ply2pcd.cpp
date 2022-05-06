#include<pcl/io/ply_io.h>
#include<pcl/io/pcd_io.h>
  int main(int argc,char**argv)
  {
    pcl::PCLPointCloud2 cloud;
    pcl::PLYReader reader;
    reader.read("cloud.ply",cloud);
    pcl::PCDWriter writer;
    writer.write("cloud.pcd",cloud);
    return 0
  }
