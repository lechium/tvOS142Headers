/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:31 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding> {

	BSMutableSettings* _clientSettings;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * scheme; 
@property (nonatomic,copy) NSString * launchInterfaceIdentifier; 
@property (nonatomic,copy) NSString * requiredOSVersion; 
@property (assign,nonatomic) unsigned long long interfaceOrientationMask; 
@property (assign,nonatomic) CGSize referenceSize; 
@property (assign,nonatomic) double imageScale; 
@property (assign,nonatomic) unsigned long long contentTypeMask; 
@property (assign,nonatomic) unsigned long long statusBarStateMask; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,copy) XBDisplayEdgeInsetsWrapper * customSafeAreaInsets; 
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen; 
@property (assign,nonatomic) unsigned long long statusBarState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicate;
-(NSString *)name;
-(NSString *)description;
-(id)init;
-(NSString *)scheme;
-(void)setName:(NSString *)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(double)imageScale;
-(BOOL)isFullScreen;
-(long long)userInterfaceStyle;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(void)setFullScreen:(BOOL)arg1 ;
-(CGSize)referenceSize;
-(void)setReferenceSize:(CGSize)arg1 ;
-(unsigned long long)statusBarState;
-(NSString *)launchInterfaceIdentifier;
-(XBDisplayEdgeInsetsWrapper *)customSafeAreaInsets;
-(void)setCustomSafeAreaInsets:(XBDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)setContentTypeMask:(unsigned long long)arg1 ;
-(BOOL)_hasClientObjectForKey:(unsigned long long)arg1 ;
-(unsigned long long)contentTypeMask;
-(unsigned long long)interfaceOrientationMask;
-(NSString *)requiredOSVersion;
-(unsigned long long)statusBarStateMask;
-(id)_clientObjectForKey:(unsigned long long)arg1 ;
-(void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(void)_removeClientObjectForKey:(unsigned long long)arg1 ;
-(void)setStatusBarStateMask:(unsigned long long)arg1 ;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(void)setImageScale:(double)arg1 ;
@end

