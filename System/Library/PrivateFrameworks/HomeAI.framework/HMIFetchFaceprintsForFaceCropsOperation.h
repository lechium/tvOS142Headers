/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:30 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIPersonManagerDataSource;
@class NSSet, NSString, NSArray;

@interface HMIFetchFaceprintsForFaceCropsOperation : HMFOperation <HMFObject, HMFLogging> {

	id<HMIPersonManagerDataSource> _dataSource;
	NSSet* _faceCropUUIDs;
	NSSet* _faceprints;

}

@property (readonly) id<HMIPersonManagerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * faceCropUUIDs;                                       //@synthesize faceCropUUIDs=_faceCropUUIDs - In the implementation block
@property (readonly) NSSet * faceprints;                                          //@synthesize faceprints=_faceprints - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(void)main;
-(NSString *)shortDescription;
-(id<HMIPersonManagerDataSource>)dataSource;
-(NSString *)privateDescription;
-(id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2 ;
-(NSSet *)faceprints;
-(NSSet *)faceCropUUIDs;
@end

