//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NMDiscoveryContent, UIImageView, UILabel;

@interface NMNetEaseExclusiveChannelCellTableViewCell : UITableViewCell
{
    UIImageView *_coverView;
    UIImageView *_typeIcon;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    NMDiscoveryContent *_resource;
}

+ (double)heightForContent:(id)arg1;
@property(retain, nonatomic) NMDiscoveryContent *resource; // @synthesize resource=_resource;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

