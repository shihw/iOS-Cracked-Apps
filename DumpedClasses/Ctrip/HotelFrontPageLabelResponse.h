//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface HotelFrontPageLabelResponse : CTBusinessBean
{
    int _result;
    int _customerType;
    NSString *_resultMessage;
    NSMutableArray *_hotelLableInfoList;
}

@property(nonatomic) int customerType; // @synthesize customerType=_customerType;
@property(retain, nonatomic) NSMutableArray *hotelLableInfoList; // @synthesize hotelLableInfoList=_hotelLableInfoList;
@property(copy, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

