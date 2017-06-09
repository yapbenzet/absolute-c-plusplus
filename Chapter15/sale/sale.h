#ifndef SALE_H
#define SALE_H

namespace SavitchSale {
  class Sale {
  public:
    Sale();
    Sale(double thePrice);

    double getPrice() const;
    void setPrice(double newPrice);

    virtual double bill() const;
    double savings(const Sale& other) const;
  private:
    double price;
  };

  bool operator < (const Sale& first, const Sale& second);
}

#endif
