//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

#import "PHPhotoLibraryChangeObserver.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "XYPHPostAssetCollectionTableViewDelegate.h"
#import "XYPHPostAssetsCollectionViewCellDelegate.h"

@class NSMutableArray, NSString, UIButton, UICollectionView, XYPHPostAssetCollectionTableView, XYPHPostAssetsCollectionDataSource, XYPHPostAssetsDataSource;

@interface XYPHPostAssetsViewController : XYPHBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UITableViewDelegate, UITableViewDataSource, XYPHPostAssetCollectionTableViewDelegate, XYPHPostAssetsCollectionViewCellDelegate, PHPhotoLibraryChangeObserver>
{
    _Bool _isGenerating;
    UICollectionView *_collectionView;
    XYPHPostAssetsDataSource *_assetsDataSource;
    XYPHPostAssetsCollectionDataSource *_collectionDataSource;
    NSMutableArray *_selectedAssets;
    long long _numberOfPhotoPerRow;
    UIButton *_titleButton;
    XYPHPostAssetCollectionTableView *_assetCollectionTableView;
}

@property(nonatomic) _Bool isGenerating; // @synthesize isGenerating=_isGenerating;
@property(retain, nonatomic) XYPHPostAssetCollectionTableView *assetCollectionTableView; // @synthesize assetCollectionTableView=_assetCollectionTableView;
@property(retain, nonatomic) UIButton *titleButton; // @synthesize titleButton=_titleButton;
@property(nonatomic) long long numberOfPhotoPerRow; // @synthesize numberOfPhotoPerRow=_numberOfPhotoPerRow;
@property(retain, nonatomic) NSMutableArray *selectedAssets; // @synthesize selectedAssets=_selectedAssets;
@property(retain, nonatomic) XYPHPostAssetsCollectionDataSource *collectionDataSource; // @synthesize collectionDataSource=_collectionDataSource;
@property(retain, nonatomic) XYPHPostAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)postImageChangeNotification:(id)arg1;
- (void)continueButtonTouchUpInside:(id)arg1;
- (void)cancelBarButtonTouchUpInside:(id)arg1;
- (void)titleButtonTouchUpInside:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)postAssetCollectionTableViewWillDismiss:(id)arg1;
- (void)postAssetCollectionTableViewWillShow:(id)arg1;
- (void)postAssetsCollectionViewCell:(id)arg1 didCheckmarkButtonTouchUpInside:(id)arg2 isSelected:(_Bool)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)selectedPhotoCountInAlbum:(id)arg1;
- (void)setupContinuerBarButtonItem;
- (void)setup;
- (void)setupTitleButton:(_Bool)arg1;
- (void)initAssetsData;
- (void)initAlbumsData;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

