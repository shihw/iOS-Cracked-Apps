//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQCallBlockerManagerDelegate-Protocol.h"

@class MQQCallBlockerReloadOptions, NSArray, NSDate, NSError, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, NSTimer;

@interface MQQCallBlockerCenter : NSObject <MQQCallBlockerManagerDelegate>
{
    NSMutableArray *_delegates;
    NSRecursiveLock *_delegatesLock;
    _Bool _isReloadingData;
    _Bool _isCheckingIdentification;
    _Bool _isUpdatingIdentification;
    NSArray *_mainManagers;
    NSArray *_secondaryManagers;
    NSArray *_allManagers;
    NSArray *_cachedEnabledManagers;
    NSMutableDictionary *_userInfo;
    double _finishedReloadProgress;
    double _totalReloadProgress;
    NSMutableDictionary *_estimatedProgressDictionary;
    NSTimer *_reloadingIntervalProgressTimer;
    NSError *_tempReloadError;
    MQQCallBlockerReloadOptions *_reloadingOptions;
    NSMutableArray *_reloadingManagers;
    NSMutableArray *_checkingIdentificationManagers;
    NSMutableDictionary *_tempProgressDictionary;
    NSMutableArray *_updatingIdentificationManagers;
}

+ (id)sharedCenter;
+ (_Bool)isSupported;
+ (long long)currentRepairTypeWithError:(id)arg1;
@property(retain) NSMutableArray *updatingIdentificationManagers; // @synthesize updatingIdentificationManagers=_updatingIdentificationManagers;
@property(retain) NSMutableDictionary *tempProgressDictionary; // @synthesize tempProgressDictionary=_tempProgressDictionary;
@property(retain) NSMutableArray *checkingIdentificationManagers; // @synthesize checkingIdentificationManagers=_checkingIdentificationManagers;
@property(retain) NSMutableArray *reloadingManagers; // @synthesize reloadingManagers=_reloadingManagers;
@property(retain) MQQCallBlockerReloadOptions *reloadingOptions; // @synthesize reloadingOptions=_reloadingOptions;
@property(retain) NSError *tempReloadError; // @synthesize tempReloadError=_tempReloadError;
@property(retain) NSTimer *reloadingIntervalProgressTimer; // @synthesize reloadingIntervalProgressTimer=_reloadingIntervalProgressTimer;
@property(retain) NSMutableDictionary *estimatedProgressDictionary; // @synthesize estimatedProgressDictionary=_estimatedProgressDictionary;
@property double totalReloadProgress; // @synthesize totalReloadProgress=_totalReloadProgress;
@property double finishedReloadProgress; // @synthesize finishedReloadProgress=_finishedReloadProgress;
@property(readonly, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property _Bool isUpdatingIdentification; // @synthesize isUpdatingIdentification=_isUpdatingIdentification;
@property _Bool isCheckingIdentification; // @synthesize isCheckingIdentification=_isCheckingIdentification;
@property _Bool isReloadingData; // @synthesize isReloadingData=_isReloadingData;
@property(copy) NSArray *cachedEnabledManagers; // @synthesize cachedEnabledManagers=_cachedEnabledManagers;
@property(copy) NSArray *allManagers; // @synthesize allManagers=_allManagers;
@property(copy) NSArray *secondaryManagers; // @synthesize secondaryManagers=_secondaryManagers;
@property(copy) NSArray *mainManagers; // @synthesize mainManagers=_mainManagers;
- (void)callBlockerManagerDidCancelUpdatingIdentification:(id)arg1;
- (void)callBlockerManager:(id)arg1 didUpdateIdentificationWithError:(id)arg2;
- (void)_callBlockerManager:(id)arg1 isUpdatingIdentificationWithProgress:(double)arg2;
- (void)callBlockerManager:(id)arg1 isUpdatingIdentificationWithProgress:(double)arg2;
- (void)suspendUpdatingIdentification;
- (void)resumeUpdatingIdentification;
- (void)cancelUpdatingIdentification;
- (_Bool)updateIdentificationWithManagers:(id)arg1 options:(id)arg2;
- (_Bool)updateIdentificationWithManagers:(id)arg1;
- (void)callBlockerManagerDidCancelCheckingIdentification:(id)arg1;
- (void)callBlockerManager:(id)arg1 didCheckIdentificationWithError:(id)arg2;
- (void)cancelCheckingIdentification;
- (_Bool)checkIdentificationWithManagers:(id)arg1;
- (id)lastCheckIdentificationTimeForManagers:(id)arg1;
- (id)managersThatHaveUpdate:(id)arg1;
- (_Bool)hasIdentificationUpdateForManagers:(id)arg1;
- (id)managersThatExistIdentificationData;
- (_Bool)switchCurrentProvince:(long long)arg1;
- (_Bool)canSwitchCurrentProvince:(long long)arg1;
@property(readonly) long long currentProvince;
- (void)requestAutoUpdatePushIfNeeded;
- (_Bool)hasIDBsToReloadForManagers:(id)arg1;
- (id)managersThatHaveIDBToReload:(id)arg1;
- (void)stopReloadingIntervalProgressTimer;
- (void)startReloadingIntervalProgressTimerWithInterval:(long long)arg1;
- (void)callBlockerManager:(id)arg1 didReloadDataWithError:(id)arg2;
- (void)_callBlockerManager:(id)arg1 isReloadingDataWithEstimatedProgress:(double)arg2;
- (void)callBlockerManager:(id)arg1 isReloadingDataWithEstimatedProgress:(double)arg2;
- (_Bool)reloadDataWithManagers:(id)arg1 options:(id)arg2;
- (_Bool)reloadDataWithManagers:(id)arg1;
- (_Bool)wantsConcurrentReloadingData;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (_Bool)enabledStatusWithEnabledManagers:(id)arg1;
- (void)getEnabledStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getEnabledManagersWithManagers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)updateIdentification;
@property(readonly) NSDate *lastCheckIdentificationTime;
- (_Bool)hasIdentificationUpdate;
- (id)managersThatHaveUpdate;
- (_Bool)checkIdentification;
- (_Bool)hasIDBsToReload;
- (id)managersThatHaveIDBToReload;
- (_Bool)reloadData;
@property(readonly) NSError *lastReloadError;
- (_Bool)detainedProvinceNeedUpdate;
- (_Bool)shouldOverwriteData;
- (_Bool)shouldReloadNewManagers;
- (long long)currentRepairType;
- (id)managersThatNeedReloadForAll;
- (id)managersThatNeedReloadForError;
- (id)managersThatNeedReloadForExtension;
- (id)managersThatCanReload;
- (long long)insertedCountOfUpdateInfos;
- (long long)fileSizeOfUpdateInfos;
- (id)managersThatHaveUpdateForExtension;
- (_Bool)checkIdentificationForExtension;
- (id)managersThatNeedCheckForExtension;
- (_Bool)isOperating;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

