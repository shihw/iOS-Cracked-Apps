//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIViewController;

@interface AppHelper : NSObject
{
    UIViewController *_fatherCtl;
}

+ (void)openWebPageWithUrl:(id)arg1 viewCtl:(id)arg2 strategy:(id)arg3;
+ (_Bool)shouldJumpSafariCtlWithUrl:(id)arg1;
+ (id)reportParamsWithJCEAction:(id)arg1;
+ (id)getOnaViewObjWithTempletLine:(id)arg1;
+ (void)handleTransitionalPage;
+ (unsigned long long)tabTagForTabIndex:(unsigned long long)arg1;
+ (void)selectTabWithTag:(unsigned long long)arg1 backToRoot:(_Bool)arg2;
+ (void)selectTabWithTag:(unsigned long long)arg1;
+ (_Bool)isTabSelected:(unsigned long long)arg1;
+ (id)viewControllerForTabTag:(unsigned long long)arg1;
+ (id)buttonForTabTag:(unsigned long long)arg1;
+ (unsigned long long)tabTagForTabName:(id)arg1;
+ (int)indexForTabTag:(unsigned long long)arg1;
+ (void)updateDynamicHomeQuickShortcutItems;
+ (void)handleWatchRecordJump:(id)arg1;
+ (_Bool)handleHomeQuickActionJump:(id)arg1;
+ (void)playNetwork3GPromptWithConfirmBlock:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
+ (_Bool)checkExist3GPrompt:(_Bool)arg1;
+ (void)reportPosterExploreWithKey:(id)arg1 params:(id)arg2 extraReportArray:(id)arg3;
+ (void)reportPosterExploreWithKey:(id)arg1 params:(id)arg2;
+ (void)reportPosterExploreWithPoster:(id)arg1;
+ (void)reportPosterExploreWithAction:(id)arg1;
+ (void)reportPosterExplore:(id)arg1;
+ (void)reportPosterClickWithKey:(id)arg1 params:(id)arg2;
+ (void)reportPosterClick:(id)arg1;
+ (void)handleJumpURL:(id)arg1 objectItem:(id)arg2 action:(id)arg3;
+ (void)handleJumpURL:(id)arg1;
+ (void)handleJCEAction:(id)arg1 objectItem:(id)arg2;
+ (void)handleJCEAction:(id)arg1;
+ (void)handleJumpActor:(id)arg1 isPush:(_Bool)arg2;
+ (void)registerOpenPushNotification;
+ (id)sharedInstance;
@property UIViewController *fatherCtl; // @synthesize fatherCtl=_fatherCtl;
- (void)doPresentSafariCtl:(id)arg1;
- (void)dismissPlayNetwork3GPrompt;
- (void)didTapItem:(id)arg1 viewCtl:(id)arg2;
- (void)tapReceiveItem:(id)arg1 viewCtl:(id)arg2;
- (void)tapLiveLittleVideoItem:(id)arg1 viewCtl:(id)arg2;
- (void)tapMomentItem:(id)arg1 viewCtl:(id)arg2;
- (id)frontViewControllerForController:(id)arg1;
- (id)frontViewControllerForController:(id)arg1 checkLifeCycleState:(_Bool)arg2;
- (id)topViewController;
- (void)goChannelWithCode:(id)arg1;
- (void)returnModelDown:(id)arg1;
- (void)dismissModelViewCtl:(_Bool)arg1;
- (void)dismissModelViewCtl;
- (_Bool)modelExsist;
- (void)popupModelViewCtl:(id)arg1 father:(id)arg2 animated:(_Bool)arg3 orientation:(unsigned long long)arg4;
- (void)popupModelViewCtl:(id)arg1 father:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)addNotificationsForCookieStorage;
- (void)cookieForCookieStorageNotification:(id)arg1;
- (void)clearInvalidCookieByH5Page;
- (void)deleteCookieForCookieStorage;
- (void)setCookieForCookieStorage;
@property(retain, nonatomic) NSArray *userCookies; // @dynamic userCookies;

@end

