//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class NSObject<ArticleBaseListViewDelegate>, NSString, TTCategory;

@interface ArticleBaseListView : SSViewBase
{
    _Bool _isCurrentDisplayView;
    TTCategory *currentCategory;
    NSObject<ArticleBaseListViewDelegate> *delegate;
    double _bottomInset;
    NSString *_enterType;
}

@property(nonatomic) _Bool isCurrentDisplayView; // @synthesize isCurrentDisplayView=_isCurrentDisplayView;
@property(retain, nonatomic) NSString *enterType; // @synthesize enterType=_enterType;
@property(readonly, nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak NSObject<ArticleBaseListViewDelegate> *delegate; // @synthesize delegate;
@property(retain, nonatomic) TTCategory *currentCategory; // @synthesize currentCategory;
- (void).cxx_destruct;
- (_Bool)needClearRecommendTabBadge;
- (void)trackPullDownEventForLabel:(id)arg1;
- (void)listViewWillEnterBackground;
- (void)listViewWillEnterForground;
- (void)cancelAllOperation;
- (void)refresh;
- (void)closePadComments;
- (void)scrollToTopEnable:(_Bool)arg1;
- (void)pullAndRefresh;
- (void)refreshCategory:(id)arg1;
- (void)refreshDisplayView:(_Bool)arg1;
- (void)refreshListViewForCategory:(id)arg1 isDisplayView:(_Bool)arg2 fromLocal:(_Bool)arg3 fromRemote:(_Bool)arg4 reloadFromType:(int)arg5;
- (void)cacheCleared:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

