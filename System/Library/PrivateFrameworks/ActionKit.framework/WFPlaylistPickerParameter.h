/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:19:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, WFPlaylistSubstitutableState, WFAppleMusicAccessResource;

@interface WFPlaylistPickerParameter : WFEnumerationParameter {

	BOOL _showLibrary;
	BOOL _generatingNotifications;
	NSArray* _possibleStates;
	WFPlaylistSubstitutableState* _entireLibraryState;
	WFAppleMusicAccessResource* _appleMusicAccessResource;

}

@property (nonatomic,readonly) BOOL showLibrary;                                                 //@synthesize showLibrary=_showLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates;                                         //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,retain) WFPlaylistSubstitutableState * entireLibraryState;                  //@synthesize entireLibraryState=_entireLibraryState - In the implementation block
@property (assign,nonatomic) BOOL generatingNotifications;                                       //@synthesize generatingNotifications=_generatingNotifications - In the implementation block
@property (nonatomic,retain) WFAppleMusicAccessResource * appleMusicAccessResource;              //@synthesize appleMusicAccessResource=_appleMusicAccessResource - In the implementation block
+(id)referencedActionResourceClasses;
+(BOOL)hasPlaylistAccess;
-(id)defaultSerializedRepresentation;
-(Class)singleStateClass;
-(void)possibleStatesDidChange;
-(NSArray *)possibleStates;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)initWithDefinition:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(void)setActionResources:(id)arg1 ;
-(void)setAppleMusicAccessResource:(WFAppleMusicAccessResource *)arg1 ;
-(void)authorizationStatusDidChange;
-(void)updateChangeNotificationRegistration;
-(BOOL)showLibrary;
-(WFPlaylistSubstitutableState *)entireLibraryState;
-(void)setEntireLibraryState:(WFPlaylistSubstitutableState *)arg1 ;
-(BOOL)generatingNotifications;
-(void)setGeneratingNotifications:(BOOL)arg1 ;
-(WFAppleMusicAccessResource *)appleMusicAccessResource;
@end
