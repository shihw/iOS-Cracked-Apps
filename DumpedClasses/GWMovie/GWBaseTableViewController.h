//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MJRefreshFooterView, MJRefreshHeaderView, NSString, UIColor, UILabel, UITableView, UIView;

@interface GWBaseTableViewController : GWBaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _hasHeaderRefresh;
    _Bool _hasFooterRefresh;
    _Bool _isShowShadow;
    _Bool _isLoaded;
    MJRefreshHeaderView *_refreshHeader;
    MJRefreshFooterView *_refreshFooter;
    UIColor *_freshCircleColor;
    UITableView *_tableView;
    UIView *_lineView;
    UILabel *_footerLabel;
}

@property(retain, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isShowShadow; // @synthesize isShowShadow=_isShowShadow;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) _Bool hasFooterRefresh; // @synthesize hasFooterRefresh=_hasFooterRefresh;
@property(nonatomic) _Bool hasHeaderRefresh; // @synthesize hasHeaderRefresh=_hasHeaderRefresh;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIColor *freshCircleColor; // @synthesize freshCircleColor=_freshCircleColor;
@property(retain, nonatomic) MJRefreshFooterView *refreshFooter; // @synthesize refreshFooter=_refreshFooter;
@property(retain, nonatomic) MJRefreshHeaderView *refreshHeader; // @synthesize refreshHeader=_refreshHeader;
- (void).cxx_destruct;
- (void)removeFooter;
- (void)resetFooterView;
- (void)addFooterEndView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateLastUpdateTime;
- (void)updateShadowWithIsShow:(_Bool)arg1;
- (void)dealloc;
- (void)finishRefreshFromFooter;
- (void)finishRefreshFromHeader;
- (void)beginRefreshFromFooter;
- (void)beginRefreshFromHeader;
- (void)addHeader;
- (void)addFooter;
- (void)viewDidLoad;
- (void)createTableView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)hideDramaListRequestMessageView;
- (void)showDramaListRequestMessageView;
- (void)removeMessageView;
- (id)configMessageRootView;
- (void)createRequestMessage;
- (void)createNoConnectMessageWithTitle:(id)arg1 withRetry:(CDUnknownBlockType)arg2;
- (void)createEmptyMessageWithTitle:(id)arg1 withRetry:(CDUnknownBlockType)arg2;
- (void)createNoContentMessageWithEmptyStr:(id)arg1 noConnectStr:(id)arg2 withRetry:(CDUnknownBlockType)arg3;
@property(retain) UIView *oriTableHeaderView;
@property(retain) UIColor *messageBackgroundColor;
@property double messageHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

