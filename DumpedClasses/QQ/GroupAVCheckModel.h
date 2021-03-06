//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface GroupAVCheckModel : NSObject
{
    int _releationType;
    int _businessType;
    unsigned long long _releationID;
    UIImage *_bImage;
    NSString *_bTitle;
    NSString *_bDescription;
    NSString *_bOperation;
    NSString *_bEmpty;
    NSString *_bFail;
}

@property(copy, nonatomic) NSString *bFail; // @synthesize bFail=_bFail;
@property(copy, nonatomic) NSString *bEmpty; // @synthesize bEmpty=_bEmpty;
@property(copy, nonatomic) NSString *bOperation; // @synthesize bOperation=_bOperation;
@property(copy, nonatomic) NSString *bDescription; // @synthesize bDescription=_bDescription;
@property(copy, nonatomic) NSString *bTitle; // @synthesize bTitle=_bTitle;
@property(retain, nonatomic) UIImage *bImage; // @synthesize bImage=_bImage;
@property(nonatomic) unsigned long long releationID; // @synthesize releationID=_releationID;
@property(nonatomic) int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) int releationType; // @synthesize releationType=_releationType;

@end

