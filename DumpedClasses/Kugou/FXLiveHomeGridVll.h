//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FXLiveAutoPlayDelegate.h"
#import "RefreshControlDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "WatchLiveHomeCollectionHeaderDelegate.h"

@class FXArtFlowLayout, FXBllKeyModel, FXLiveAutoPlayVLL, FXLiveHomeGridView, FXLiveHomeListVm, FXLiveHomeViewController, FXStarInfo, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, RefreshControl, UIView;

@interface FXLiveHomeGridVll : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WatchLiveHomeCollectionHeaderDelegate, RefreshControlDelegate, FXLiveAutoPlayDelegate>
{
    _Bool _isPageCover;
    _Bool _isWonderfulRecommendation;
    _Bool _isRefreshSongName;
    _Bool _isRequestingSongName;
    _Bool _hadLoadedAll;
    _Bool _isReloading;
    _Bool _isLoadingNext;
    _Bool _isPageStop;
    _Bool _isRefreshTop;
    _Bool _hasShowLastPageTipFlag;
    FXLiveHomeViewController *_rootVC;
    FXLiveHomeGridView *_view;
    CDUnknownBlockType _gridTouch;
    CDUnknownBlockType _categoryMoreBtnTouch;
    CDUnknownBlockType _homeFunctionTouchBlock;
    NSTimer *_songTimer;
    NSTimer *_delayRefreshTimer;
    UIView *_header;
    FXLiveAutoPlayVLL *_autoPlayVll;
    NSArray *_allItemsArray;
    CDUnknownBlockType _refreshComplete;
    CDUnknownBlockType _pullDownBeginBlock;
    CDUnknownBlockType _loadMoreBlock;
    CDUnknownBlockType _needToShowFullScreenNetError;
    CDUnknownBlockType _needToShowNoData;
    CDUnknownBlockType _countDownBlock;
    CDUnknownBlockType _getRequestResult;
    NSArray *_recommendListCache;
    FXLiveHomeListVm *_gridVm;
    FXArtFlowLayout *_layout;
    long long _hotListCurPage;
    double _lastOffsetY;
    FXStarInfo *_autoLiveItemStarInfo;
    NSMutableDictionary *_songNameDic;
    FXBllKeyModel *_currentSongKey;
    RefreshControl *_refreshControl;
    NSArray *_lastDataArray;
    unsigned long long _willRequestDataType;
    NSDictionary *_typeDict;
    NSMutableDictionary *_categoryPageDic;
    NSMutableDictionary *_loadingCategoryDic;
    NSMutableArray *_roomIdArray;
    NSMutableArray *_smallCategoryKeyAr;
    struct CGRect _autoPlayCellFrame;
}

@property(nonatomic) _Bool hasShowLastPageTipFlag; // @synthesize hasShowLastPageTipFlag=_hasShowLastPageTipFlag;
@property(retain, nonatomic) NSMutableArray *smallCategoryKeyAr; // @synthesize smallCategoryKeyAr=_smallCategoryKeyAr;
@property(retain, nonatomic) NSMutableArray *roomIdArray; // @synthesize roomIdArray=_roomIdArray;
@property(retain, nonatomic) NSMutableDictionary *loadingCategoryDic; // @synthesize loadingCategoryDic=_loadingCategoryDic;
@property(retain, nonatomic) NSMutableDictionary *categoryPageDic; // @synthesize categoryPageDic=_categoryPageDic;
@property(retain, nonatomic) NSDictionary *typeDict; // @synthesize typeDict=_typeDict;
@property(nonatomic) unsigned long long willRequestDataType; // @synthesize willRequestDataType=_willRequestDataType;
@property(retain, nonatomic) NSArray *lastDataArray; // @synthesize lastDataArray=_lastDataArray;
@property(nonatomic) _Bool isRefreshTop; // @synthesize isRefreshTop=_isRefreshTop;
@property(retain, nonatomic) RefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(retain, nonatomic) FXBllKeyModel *currentSongKey; // @synthesize currentSongKey=_currentSongKey;
@property(retain, nonatomic) NSMutableDictionary *songNameDic; // @synthesize songNameDic=_songNameDic;
@property(nonatomic) struct CGRect autoPlayCellFrame; // @synthesize autoPlayCellFrame=_autoPlayCellFrame;
@property(nonatomic) _Bool isPageStop; // @synthesize isPageStop=_isPageStop;
@property(retain, nonatomic) FXStarInfo *autoLiveItemStarInfo; // @synthesize autoLiveItemStarInfo=_autoLiveItemStarInfo;
@property(nonatomic) double lastOffsetY; // @synthesize lastOffsetY=_lastOffsetY;
@property(nonatomic) _Bool isLoadingNext; // @synthesize isLoadingNext=_isLoadingNext;
@property(nonatomic) _Bool isReloading; // @synthesize isReloading=_isReloading;
@property(nonatomic) _Bool hadLoadedAll; // @synthesize hadLoadedAll=_hadLoadedAll;
@property(nonatomic) long long hotListCurPage; // @synthesize hotListCurPage=_hotListCurPage;
@property(retain, nonatomic) FXArtFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) FXLiveHomeListVm *gridVm; // @synthesize gridVm=_gridVm;
@property _Bool isRequestingSongName; // @synthesize isRequestingSongName=_isRequestingSongName;
@property(retain, nonatomic) NSArray *recommendListCache; // @synthesize recommendListCache=_recommendListCache;
@property(nonatomic) _Bool isRefreshSongName; // @synthesize isRefreshSongName=_isRefreshSongName;
@property(nonatomic) _Bool isWonderfulRecommendation; // @synthesize isWonderfulRecommendation=_isWonderfulRecommendation;
@property(copy, nonatomic) CDUnknownBlockType getRequestResult; // @synthesize getRequestResult=_getRequestResult;
@property(copy, nonatomic) CDUnknownBlockType countDownBlock; // @synthesize countDownBlock=_countDownBlock;
@property(copy, nonatomic) CDUnknownBlockType needToShowNoData; // @synthesize needToShowNoData=_needToShowNoData;
@property(copy, nonatomic) CDUnknownBlockType needToShowFullScreenNetError; // @synthesize needToShowFullScreenNetError=_needToShowFullScreenNetError;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
@property(copy, nonatomic) CDUnknownBlockType pullDownBeginBlock; // @synthesize pullDownBeginBlock=_pullDownBeginBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshComplete; // @synthesize refreshComplete=_refreshComplete;
@property(retain, nonatomic) NSArray *allItemsArray; // @synthesize allItemsArray=_allItemsArray;
@property(nonatomic) _Bool isPageCover; // @synthesize isPageCover=_isPageCover;
@property(nonatomic) __weak FXLiveAutoPlayVLL *autoPlayVll; // @synthesize autoPlayVll=_autoPlayVll;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) NSTimer *delayRefreshTimer; // @synthesize delayRefreshTimer=_delayRefreshTimer;
@property(retain, nonatomic) NSTimer *songTimer; // @synthesize songTimer=_songTimer;
@property(copy, nonatomic) CDUnknownBlockType homeFunctionTouchBlock; // @synthesize homeFunctionTouchBlock=_homeFunctionTouchBlock;
@property(copy, nonatomic) CDUnknownBlockType categoryMoreBtnTouch; // @synthesize categoryMoreBtnTouch=_categoryMoreBtnTouch;
@property(copy, nonatomic) CDUnknownBlockType gridTouch; // @synthesize gridTouch=_gridTouch;
@property(retain, nonatomic) FXLiveHomeGridView *view; // @synthesize view=_view;
@property(retain, nonatomic) FXLiveHomeViewController *rootVC; // @synthesize rootVC=_rootVC;
- (void).cxx_destruct;
- (void)recordExposureStatisticsData;
- (void)sendFXLiveLeadingStatistics;
- (void)actionLiveInfoCache;
- (id)getRecommendList;
- (id)getConcernList;
- (void)getMaxCount;
- (void)reportMaxCount;
- (void)clearConcernState;
- (void)setConcernState:(id)arg1;
- (void)reloadConcernList:(id)arg1;
- (void)refreshCity:(id)arg1;
- (id)getNeedRefreshSongData;
- (id)getAutoLiveStarInfoByView:(id)arg1;
- (_Bool)isCanStartAutoPlayLive;
- (id)getCurrentAutoLiveStarInfo;
- (id)getAutoLiveView;
- (_Bool)isVisibleOfAutoLiveCell;
- (void)reloadData;
- (void)refreshAllLoadedData;
- (_Bool)isRefreshDataChange;
- (void)loadNextPage:(CDUnknownBlockType)arg1;
- (void)refreshViewAndScrollToTop;
- (void)refreshView:(_Bool)arg1;
- (_Bool)isMyConcernTypeWithTitle:(id)arg1;
- (id)getAllItemList;
- (unsigned long long)getAllCount;
- (void)autoRefreshTop;
- (void)finishRefresh;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)watchLiveHomeCollectionHeader:(id)arg1 moreBtnDidClicked:(id)arg2;
- (void)watchLiveHomeCollectionHeader:(id)arg1 changeBtnDidClicked:(id)arg2;
- (void)deleteConcernListCache;
- (_Bool)isOpenCountDownRefresh;
- (void)updateConcernRightLabel:(id)arg1;
- (void)onSkinChange:(id)arg1;
- (void)updateSongName;
- (void)changeSongData:(id)arg1;
- (void)refreshSongName;
- (void)delayRefreshSong;
- (void)autoRefreshSongName;
- (void)saveRoomIds;
- (unsigned long long)getTypeWithRow:(long long)arg1;
- (id)getDataWithRow:(unsigned long long)arg1;
- (id)convernStarInfoToRoomInfo:(id)arg1;
- (id)convernRoomInfoToStarInfo:(id)arg1;
- (id)configPage2AndMoreDataSource:(id)arg1 andPage:(long long)arg2;
- (void)configPage1DataSourceWithRecommendList:(id)arg1 recommend:(id)arg2 withHotList:(id)arg3;
- (void)getDataAndRefresh:(CDUnknownBlockType)arg1;
- (void)configCollection;
- (void)configLayout;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

