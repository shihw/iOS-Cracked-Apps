//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CLLocation, NSMutableArray, NSString, PTHLocationManager, PTHTweetbotAccount, PTHTweetbotPlace, UITableView, UIView;

@interface PTHTweetbotGeoSearchController : PTHViewController <UITableViewDelegate, UITableViewDataSource>
{
    PTHTweetbotAccount *_account;
    UITableView *_tableView;
    _Bool _firstTime;
    PTHLocationManager *_locationManager;
    NSMutableArray *_pois;
    UIView *_poisHeader;
    NSMutableArray *_places;
    UIView *_placesHeader;
    unsigned long long _state;
    CLLocation *_location;
    PTHTweetbotPlace *_place;
}

@property(retain, nonatomic) PTHTweetbotPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)dealloc;
- (void)ok:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)reloadData;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

