//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface _TtC7Lingome27UserRecordInfoTableViewCell : UITableViewCell
{
    // Error parsing type: , name: recordLabel
    // Error parsing type: , name: recordHintLabel
    // Error parsing type: , name: topicLabel
    // Error parsing type: , name: topicHintLabel
    // Error parsing type: , name: subscribeLabel
    // Error parsing type: , name: subscribleHintLabel
    // Error parsing type: , name: videoCourseLabel
    // Error parsing type: , name: videoCourseHintLabel
    // Error parsing type: , name: requestRecordEventClosure
    // Error parsing type: , name: requestTopicEventClosure
    // Error parsing type: , name: requestSubscribeEventClosure
    // Error parsing type: , name: requestVideoCourseEventClosure
}

- (CDUnknownBlockType).cxx_destruct;
- (void)handleVideoCourseTapped;
- (void)handleSubscribleTapped;
- (void)handleTopicTapped;
- (void)handleRecordTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, copy) CDUnknownBlockType requestVideoCourseEventClosure; // @synthesize requestVideoCourseEventClosure;
@property(nonatomic, copy) CDUnknownBlockType requestSubscribeEventClosure; // @synthesize requestSubscribeEventClosure;
@property(nonatomic, copy) CDUnknownBlockType requestTopicEventClosure; // @synthesize requestTopicEventClosure;
@property(nonatomic, copy) CDUnknownBlockType requestRecordEventClosure; // @synthesize requestRecordEventClosure;
@property(nonatomic, retain) UILabel *videoCourseHintLabel; // @synthesize videoCourseHintLabel;
@property(nonatomic, retain) UILabel *videoCourseLabel; // @synthesize videoCourseLabel;
@property(nonatomic, retain) UILabel *subscribleHintLabel; // @synthesize subscribleHintLabel;
@property(nonatomic, retain) UILabel *subscribeLabel; // @synthesize subscribeLabel;
@property(nonatomic, retain) UILabel *topicHintLabel; // @synthesize topicHintLabel;
@property(nonatomic, retain) UILabel *topicLabel; // @synthesize topicLabel;
@property(nonatomic, retain) UILabel *recordHintLabel; // @synthesize recordHintLabel;
@property(nonatomic, retain) UILabel *recordLabel; // @synthesize recordLabel;

@end

