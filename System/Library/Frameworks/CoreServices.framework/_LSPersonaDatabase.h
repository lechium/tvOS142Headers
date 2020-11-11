/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:54 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreServices/CoreServices-Structs.h>
#import <libobjc.A.dylib/UMUserPersonaUpdateObserver.h>

@class NSDictionary, NSString;

@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver> {

	os_unfair_lock_s _ivarLock;
	os_unfair_lock_s _uncachedCalloutLock;
	BOOL _registered;
	NSDictionary* _cachedBundleIDToPersonasMap;
	NSString* _cachedSystemPersonaIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)personaListDidUpdate;
-(void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2 ;
-(void)registerWithUserManager;
-(id)initPrivately;
-(void)getCachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(void)updatePersonasInDatabase;
-(void)getUncachedBundleIDToPersonasMap:(id*)arg1 systemPersonaIdentifier:(id*)arg2 ;
-(id)getBundleIDToPersonasMap;
-(id)getSystemPersonaIdentifier;
-(id)personaIdentifiersForBundleIdentifier:(id)arg1 ;
-(BOOL)personaListContainsSystemPersona:(id)arg1 ;
@end

