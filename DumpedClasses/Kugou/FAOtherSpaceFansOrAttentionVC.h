//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAViewController.h"

#import "FAOtherSpaceCollectionUserInfoViewCellDelegate.h"
#import "FAUserScrollPageManagerVcDelegate.h"
#import "FAUserStatusViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FAOthersAttentionFansListVM, FAUserStatusView, NSMutableArray, NSString, UICollectionView;

@interface FAOtherSpaceFansOrAttentionVC : FAViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, FAOtherSpaceCollectionUserInfoViewCellDelegate, FAUserStatusViewDelegate, FAUserScrollPageManagerVcDelegate>
{
    _Bool _isOtherUser;
    _Bool _isFans;
    _Bool _isHasMore;
    _Bool _isSuccessGetData;
    int _pageNum;
    id <FAUserScrollSubPageManagerDelegate> _delegate;
    long long _selectTag;
    double _initVisibleHeightOfSubVc;
    double _normalHeight;
    long long _userID;
    long long _kugouId;
    long long _sumCount;
    FAOthersAttentionFansListVM *_listVM;
    UICollectionView *_collectionView;
    NSMutableArray *_showArr;
    FAUserStatusView *_noDataStatusView;
    FAUserStatusView *_errorStatusView;
}

@property(retain, nonatomic) FAUserStatusView *errorStatusView; // @synthesize errorStatusView=_errorStatusView;
@property(retain, nonatomic) FAUserStatusView *noDataStatusView; // @synthesize noDataStatusView=_noDataStatusView;
@property(nonatomic) _Bool isSuccessGetData; // @synthesize isSuccessGetData=_isSuccessGetData;
@property(nonatomic) _Bool isHasMore; // @synthesize isHasMore=_isHasMore;
@property(nonatomic) int pageNum; // @synthesize pageNum=_pageNum;
@property(retain, nonatomic) NSMutableArray *showArr; // @synthesize showArr=_showArr;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) FAOthersAttentionFansListVM *listVM; // @synthesize listVM=_listVM;
@property(nonatomic) _Bool isFans; // @synthesize isFans=_isFans;
@property(nonatomic) long long sumCount; // @synthesize sumCount=_sumCount;
@property(nonatomic) long long kugouId; // @synthesize kugouId=_kugouId;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isOtherUser; // @synthesize isOtherUser=_isOtherUser;
@property double normalHeight; // @synthesize normalHeight=_normalHeight;
@property double initVisibleHeightOfSubVc; // @synthesize initVisibleHeightOfSubVc=_initVisibleHeightOfSubVc;
@property(nonatomic) long long selectTag; // @synthesize selectTag=_selectTag;
@property(nonatomic) __weak id <FAUserScrollSubPageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getVcScrollView;
- (void)gotoLogin;
- (void)finishRefreshWithIsHideLoadMore:(_Bool)arg1;
- (void)clickTheFollowButtonWithIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadViewData;
- (void)FAUserStatusView:(id)arg1 refresh:(void *)arg2;
- (void)reConnectEvent;
- (void)didReceiveConcernNoti:(id)arg1;
- (void)getList;
- (void)showMessageWithContentOfdelegate:(id)arg1 duration:(double)arg2;
- (void)dismissHudOfdelegate:(_Bool)arg1;
- (void)showWithStatusOfdelegate:(id)arg1;
- (void)showErrorWithStatusOfdelegate:(id)arg1 duration:(double)arg2;
- (void)completeGetData:(_Bool)arg1 hasMore:(_Bool)arg2 atIndex:(long long)arg3;
- (void)hideBlankView;
- (void)showBlankView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)configBaseParam;
- (id)initAttentionWithUid:(long long)arg1 kugouId:(long long)arg2 withCount:(long long)arg3;
- (id)initFansWithUid:(long long)arg1 kugouId:(long long)arg2 withCount:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
