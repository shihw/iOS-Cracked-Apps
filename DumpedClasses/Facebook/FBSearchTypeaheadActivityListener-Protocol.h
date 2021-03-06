//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol FBSearchSuggestionProtocol;

@protocol FBSearchTypeaheadActivityListener <NSObject>

@optional
- (void)graphSearchDidTapOnTypeaheadNUXCrossButton;
- (void)graphSearchDidReloadNullState;
- (void)graphSearchDidChangeTypeaheadInputType:(unsigned long long)arg1;
- (void)graphSearchDidChangeNullStateInputType:(unsigned long long)arg1;
- (void)graphSearchDidTapOnSuggestionArrowButton:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned long long)arg2;
- (void)graphSearchDidPressKey:(long long)arg1;
- (void)graphSearchRichMediaSuggestionLoadedWithEdges:(NSArray *)arg1;
- (void)graphSearchScopedSearchModeChanged:(_Bool)arg1;
- (void)graphSearchWillOpenSearchResults;
- (void)graphSearchExpandableModuleExpandedWithModels:(NSArray *)arg1 moduleModel:(id)arg2;
- (void)graphSearchDidTapOnRecentSearchEditButtonWithLogFilter:(NSString *)arg1;
- (void)graphSearchDidTapOnSuggestion:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned long long)arg2;
- (void)graphSearchSuggestionWillAppear:(id <FBSearchSuggestionProtocol>)arg1 position:(unsigned long long)arg2;
- (void)graphSearchContentWasUpdated;
@end

