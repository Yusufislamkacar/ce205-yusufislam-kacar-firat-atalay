// customer_project_test.cpp
#include <gtest/gtest.h>
#include "customer.h"  // Müşteri sınıfının başlık dosyası
#include "project.h"   // Proje sınıfının başlık dosyası

// Test müşteri ve proje eklemeyi, güncellemeyi ve silmeyi içerir.
TEST(CustomerProjectTest, AddUpdateDeleteTest) {
  // Müşteri ve proje nesnelerini oluştur
  Customer customer;
  customer.name = "Example Customer";
  customer.contactInfo = "customer@example.com";
  Project project;
  project.projectName = "Example Project";
  project.technologyStack = "C++, Python, JavaScript";
  // Müşteri ve proje eklemeyi test et
  addCustomer(customer);
  addProject(project);
  // Eklenen müşteriyi ve projeyi bul
  Customer foundCustomer = findCustomerByName("Example Customer");
  Project foundProject = findProjectByName("Example Project");
  // Müşteri ve proje bilgilerinin doğru eklenip eklenmediğini kontrol et
  ASSERT_EQ(customer.name, foundCustomer.name);
  ASSERT_EQ(customer.contactInfo, foundCustomer.contactInfo);
  ASSERT_EQ(project.projectName, foundProject.projectName);
  ASSERT_EQ(project.technologyStack, foundProject.technologyStack);
  // Proje güncellemeyi test et
  Project updatedProject = foundProject;
  updatedProject.technologyStack = "C++, Python, Java";
  updateProject(updatedProject);
  // Güncellenen projenin doğru olup olmadığını kontrol et
  Project foundUpdatedProject = findProjectByName("Example Project");
  ASSERT_EQ(updatedProject.technologyStack, foundUpdatedProject.technologyStack);
  // Müşteri ve projeyi silmeyi test et
  deleteCustomer(foundCustomer);
  deleteProject(foundUpdatedProject);
  // Silinen müşteri ve proje var mı diye kontrol et
  Customer deletedCustomer = findCustomerByName("Example Customer");
  Project deletedProject = findProjectByName("Example Project");
  // Silinen müşteri ve proje bulunmamalı
  ASSERT_EQ(nullptr, deletedCustomer);
  ASSERT_EQ(nullptr, deletedProject);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
