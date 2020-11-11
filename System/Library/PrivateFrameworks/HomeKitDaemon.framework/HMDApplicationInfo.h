/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class NSString, NSHashTable, NSData, NSURL, NSArray;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {

	NSString* _bundleIdentifier;
	BOOL _independent;
	id<HMFLocking> _lock;
	NSHashTable* _processes;
	HMDApplicationInfo* _companionApplicationInfo;

}

@property (getter=isIndependent,readonly) BOOL independent;                                //@synthesize independent=_independent - In the implementation block
@property (readonly) HMDApplicationInfo * companionApplicationInfo;                        //@synthesize companionApplicationInfo=_companionApplicationInfo - In the implementation block
@property (copy,readonly) NSData * vendorIdentifier; 
@property (getter=isInstalled,readonly) BOOL installed; 
@property (getter=isEntitledForAPIAccess,readonly) BOOL entitledForAPIAccess; 
@property (getter=isEntitledForSPIAccess,readonly) BOOL entitledForSPIAccess; 
@property (copy,readonly) NSString * bundleIdentifier;                                     //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) NSURL * bundleURL; 
@property (readonly) HMDApplicationInfo * hostApplicationInfo; 
@property (copy,readonly) NSArray * processes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)applicationInfoForBundleIdentifier:(id)arg1 ;
+(id)logCategory;
+(id)privateVendorIdentifier;
+(id)applicationInfoForBundleURL:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(id)shortDescription;
-(BOOL)isInstalled;
-(NSData *)vendorIdentifier;
-(NSArray *)processes;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(BOOL)isEntitledForSPIAccess;
-(BOOL)isEntitledForAPIAccess;
-(void)removeProcess:(id)arg1 ;
-(HMDApplicationInfo *)hostApplicationInfo;
-(id)clientIdentifierSalt:(id*)arg1 ;
-(void)addProcess:(id)arg1 ;
-(BOOL)isIndependent;
-(HMDApplicationInfo *)companionApplicationInfo;
@end
