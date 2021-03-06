//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGAlbumStoreAlbumInfo, KGAlbumStoreAlbumItemButton;

@interface KGAlbumStoreAlbumCell : UITableViewCell
{
    KGAlbumStoreAlbumItemButton *_leftAlbumBtn;
    KGAlbumStoreAlbumItemButton *_rightAlbumBtn;
    KGAlbumStoreAlbumInfo *_leftAlbumInfo;
    KGAlbumStoreAlbumInfo *_rightAlbumInfo;
    id <KGAlbumStoreAlbumCellDelegate> _delegate;
}

+ (double)calculateAlbumCellHeightWithShowBuyCount:(_Bool)arg1;
@property(nonatomic) __weak id <KGAlbumStoreAlbumCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KGAlbumStoreAlbumInfo *rightAlbumInfo; // @synthesize rightAlbumInfo=_rightAlbumInfo;
@property(retain, nonatomic) KGAlbumStoreAlbumInfo *leftAlbumInfo; // @synthesize leftAlbumInfo=_leftAlbumInfo;
- (void).cxx_destruct;
- (void)rightAlbumBtnDidClicked:(id)arg1;
- (void)leftAlbumBtnDidClicked:(id)arg1;
- (void)layoutSubviews;
- (void)viewInitWithShowItemPrice:(_Bool)arg1 showBuyCount:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 showItemPrice:(_Bool)arg3 showBuyCount:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

