//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FMValidateItemResultDO : NSObject
{
    _Bool _result;
    NSString *_msg;
    NSString *_title;
    NSString *_dataCode;
}

@property(copy, nonatomic) NSString *dataCode; // @synthesize dataCode=_dataCode;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
- (void).cxx_destruct;

@end
