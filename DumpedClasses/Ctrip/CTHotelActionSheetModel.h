//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CTHotelActionSheetModel : NSObject
{
    unsigned long long _type;
    NSString *_title;
    NSString *_actionStr;
    NSString *_leftSubTitle;
    NSString *_rightSubTitle;
}

@property(nonatomic) NSString *rightSubTitle; // @synthesize rightSubTitle=_rightSubTitle;
@property(nonatomic) NSString *leftSubTitle; // @synthesize leftSubTitle=_leftSubTitle;
@property(nonatomic) NSString *actionStr; // @synthesize actionStr=_actionStr;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

