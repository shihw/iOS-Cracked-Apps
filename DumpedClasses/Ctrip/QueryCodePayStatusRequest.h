//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PayDeviceInformationModel;

@interface QueryCodePayStatusRequest : CTBusinessBean
{
    int serviceVersion;
    int platform;
    PayDeviceInformationModel *deviceInfoModel;
    NSString *sCode;
}

@property(copy, nonatomic) NSString *sCode; // @synthesize sCode;
@property(retain, nonatomic) PayDeviceInformationModel *deviceInfoModel; // @synthesize deviceInfoModel;
@property(nonatomic) int platform; // @synthesize platform;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

