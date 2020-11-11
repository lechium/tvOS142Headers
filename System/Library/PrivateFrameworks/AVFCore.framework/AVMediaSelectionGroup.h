/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:29 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVMediaSelectionGroupInternal, NSArray, AVMediaSelectionOption;

@interface AVMediaSelectionGroup : NSObject <NSCopying> {

	AVMediaSelectionGroupInternal* _mediaSelectionGroup;

}

@property (nonatomic,readonly) NSArray * options; 
@property (nonatomic,readonly) AVMediaSelectionOption * defaultOption; 
@property (nonatomic,readonly) BOOL allowsEmptySelection; 
+(id)playableMediaSelectionOptionsFromArray:(id)arg1 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2 ;
+(id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2 ;
+(id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2 ;
-(id)makeNowPlayingInfoLanguageOptionGroup;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)dictionary;
-(NSArray *)options;
-(id)_groupID;
-(id)asset;
-(id)_weakReference;
-(BOOL)allowsEmptySelection;
-(AVMediaSelectionOption *)defaultOption;
-(id)mediaSelectionOptionWithPropertyList:(id)arg1 ;
-(BOOL)_isStreamingGroup;
-(BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2 ;
-(id)_groupMediaCharacteristics;
-(id)_groupMediaType;
-(id)_primaryMediaCharacteristic;
-(id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(BOOL)arg2 ;
@end

