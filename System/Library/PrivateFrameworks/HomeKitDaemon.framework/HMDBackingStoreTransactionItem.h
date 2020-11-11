/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:14 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreChangeObject.h>

@class HMDBackingStoreModelObject, NSSet, HMFMessage, NSString;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject> {

	HMDBackingStoreModelObject* _change;
	NSSet* _dependentUUIDs;
	HMFMessage* _message;

}

@property (nonatomic,readonly) HMFMessage * message;                             //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreModelObject * change;              //@synthesize change=_change - In the implementation block
@property (nonatomic,readonly) NSSet * dependentUUIDs;                           //@synthesize dependentUUIDs=_dependentUUIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HMFMessage *)message;
-(HMDBackingStoreModelObject *)change;
-(NSSet *)dependentUUIDs;
-(id)initWithChange:(id)arg1 message:(id)arg2 ;
@end

