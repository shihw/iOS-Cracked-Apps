//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>;

@interface TaxiOnePriceModel : JSONModel
{
    NSNumber<Optional> *_price;
    NSNumber<Optional> *_min;
    NSNumber<Optional> *_max;
    NSNumber<Optional> *_step;
    NSNumber<Optional> *_test_type;
    NSNumber<Optional> *_recommend_price;
}

@property(retain, nonatomic) NSNumber<Optional> *recommend_price; // @synthesize recommend_price=_recommend_price;
@property(retain, nonatomic) NSNumber<Optional> *test_type; // @synthesize test_type=_test_type;
@property(retain, nonatomic) NSNumber<Optional> *step; // @synthesize step=_step;
@property(retain, nonatomic) NSNumber<Optional> *max; // @synthesize max=_max;
@property(retain, nonatomic) NSNumber<Optional> *min; // @synthesize min=_min;
@property(retain, nonatomic) NSNumber<Optional> *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (_Bool)isOnePrice;

@end

