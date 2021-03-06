//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class FXSSwitchConfig, FXSSwitchConfigV2, NSMutableArray;

@interface FXSwitchConfig : KugouObject
{
    FXSSwitchConfig *_config;
    FXSSwitchConfigV2 *_configV2;
    NSMutableArray *_cacheProps;
    NSMutableArray *_configCacheProps;
    NSMutableArray *_configV2CacheProps;
}

+ (_Bool)getRouterConfigWithHost:(id)arg1 path:(id)arg2;
+ (long long)getBigOrLowGiftConfig;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *configV2CacheProps; // @synthesize configV2CacheProps=_configV2CacheProps;
@property(retain, nonatomic) NSMutableArray *configCacheProps; // @synthesize configCacheProps=_configCacheProps;
@property(retain, nonatomic) NSMutableArray *cacheProps; // @synthesize cacheProps=_cacheProps;
@property(retain, nonatomic) FXSSwitchConfigV2 *configV2; // @synthesize configV2=_configV2;
@property(retain, nonatomic) FXSSwitchConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (_Bool)verifyValueType:(id)arg1;
- (void)cacheTheConfigV2;
- (void)cacheTheConfig;
- (void)getCacheData;
- (id)getClassAllValidProperty:(Class)arg1;
- (void)getConfigProperty;
- (void)getProtocolProperty;
- (id)init;

@end

