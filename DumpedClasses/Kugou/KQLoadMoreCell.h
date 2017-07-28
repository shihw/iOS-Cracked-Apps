//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeImageView, KGThemeLabel, NSString;

@interface KQLoadMoreCell : UITableViewCell
{
    KGThemeLabel *_tipLabel;
    KGThemeImageView *_imgView;
    long long _state;
    NSString *_defaultMessage;
    NSString *_loadingMessage;
}

@property(copy, nonatomic) NSString *loadingMessage; // @synthesize loadingMessage=_loadingMessage;
@property(copy, nonatomic) NSString *defaultMessage; // @synthesize defaultMessage=_defaultMessage;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) KGThemeImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) KGThemeLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)finishRefreshing;
- (void)startRefreshing;
- (void)setLoadingMessage;
- (void)setDefaultMessage;
- (id)initWithReuseIdentifier:(id)arg1;

@end
