/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:15 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GCController, NSString, NSMutableSet;

@interface GCControllerElement : NSObject {

	BOOL _updatePending;
	BOOL _boundToSystemGesture;
	BOOL _remappable;
	BOOL _mappableToSystemGestures;
	float _pendingValue;
	float _deadzone;
	int _remappingKey;
	GCControllerElement* _collection;
	GCController* _controller;
	NSString* _primaryAlias;
	long long _preferredSystemGestureState;
	NSString* _sfSymbolsName;
	NSString* _localizedName;
	NSString* _unmappedSfSymbolsName;
	NSString* _unmappedLocalizedName;
	NSMutableSet* _aliases;

}

@property (assign,nonatomic,__weak) GCController * controller;                                     //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) GCControllerElement * collection;                              //@synthesize collection=_collection - In the implementation block
@property (assign) BOOL updatePending;                                                             //@synthesize updatePending=_updatePending - In the implementation block
@property (assign) float pendingValue;                                                             //@synthesize pendingValue=_pendingValue - In the implementation block
@property (nonatomic,retain) NSMutableSet * aliases;                                               //@synthesize aliases=_aliases - In the implementation block
@property (nonatomic,retain) NSString * primaryAlias;                                              //@synthesize primaryAlias=_primaryAlias - In the implementation block
@property (assign,nonatomic) float deadzone;                                                       //@synthesize deadzone=_deadzone - In the implementation block
@property (assign,nonatomic) BOOL remappable;                                                      //@synthesize remappable=_remappable - In the implementation block
@property (assign,nonatomic) int remappingKey;                                                     //@synthesize remappingKey=_remappingKey - In the implementation block
@property (assign,nonatomic) BOOL mappableToSystemGestures;                                        //@synthesize mappableToSystemGestures=_mappableToSystemGestures - In the implementation block
@property (assign,getter=isBoundToSystemGesture,nonatomic) BOOL boundToSystemGesture;              //@synthesize boundToSystemGesture=_boundToSystemGesture - In the implementation block
@property (getter=isAnalog,nonatomic,readonly) BOOL analog; 
@property (assign,nonatomic) long long preferredSystemGestureState;                                //@synthesize preferredSystemGestureState=_preferredSystemGestureState - In the implementation block
@property (nonatomic,retain) NSString * sfSymbolsName;                                             //@synthesize sfSymbolsName=_sfSymbolsName - In the implementation block
@property (nonatomic,retain) NSString * localizedName;                                             //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * unmappedSfSymbolsName;                                     //@synthesize unmappedSfSymbolsName=_unmappedSfSymbolsName - In the implementation block
@property (nonatomic,retain) NSString * unmappedLocalizedName;                                     //@synthesize unmappedLocalizedName=_unmappedLocalizedName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(float)value;
-(NSString *)localizedName;
-(GCControllerElement *)collection;
-(void)setCollection:(GCControllerElement *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(NSMutableSet *)aliases;
-(void)setAliases:(NSMutableSet *)arg1 ;
-(BOOL)_setValue:(float)arg1 ;
-(void)setRemappable:(BOOL)arg1 ;
-(void)setUnmappedLocalizedName:(NSString *)arg1 ;
-(void)setUnmappedSfSymbolsName:(NSString *)arg1 ;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(NSString *)primaryAlias;
-(void)setPrimaryAlias:(NSString *)arg1 ;
-(BOOL)updatePending;
-(void)setPendingValue:(float)arg1 ;
-(void)setUpdatePending:(BOOL)arg1 ;
-(float)pendingValue;
-(BOOL)_commitPendingValueOnQueue:(id)arg1 ;
-(void)_setPendingValue:(float)arg1 ;
-(void)setPreferredSystemGestureState:(long long)arg1 ;
-(long long)preferredSystemGestureState;
-(void)_resetPendingValue;
-(float)deadzone;
-(void)setBoundToSystemGesture:(BOOL)arg1 ;
-(void)setDeadzone:(float)arg1 ;
-(BOOL)remappable;
-(BOOL)_setPendingValueIfChanged:(float)arg1 ;
-(BOOL)isBoundToSystemGesture;
-(NSString *)sfSymbolsName;
-(void)setSfSymbolsName:(NSString *)arg1 ;
-(NSString *)unmappedSfSymbolsName;
-(NSString *)unmappedLocalizedName;
-(int)remappingKey;
-(void)setRemappingKey:(int)arg1 ;
-(BOOL)mappableToSystemGestures;
-(void)setMappableToSystemGestures:(BOOL)arg1 ;
@end

