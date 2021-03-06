//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CMScrollIndexBar, NMDownloadViewSource, NMPlayAllSectionButton, NMResourceCommentHeaderView, UITableView;

@interface NMArtistAlbumSongView : UIView
{
    NMResourceCommentHeaderView *_headerView;
    UIView *_sepLine;
    UITableView *_tableView;
    CMScrollIndexBar *_indexBar;
    NMPlayAllSectionButton *_playAll;
    id _delegate;
    NMDownloadViewSource *_downloadViewSource;
}

@property(retain, nonatomic) NMDownloadViewSource *downloadViewSource; // @synthesize downloadViewSource=_downloadViewSource;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMPlayAllSectionButton *playAll; // @synthesize playAll=_playAll;
@property(retain, nonatomic) CMScrollIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

