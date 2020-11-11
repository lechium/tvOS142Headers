/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:18:08 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSDate, HMFSoftwareVersion, NSNumber, HMSoftwareUpdateDocumentationMetadata;

@interface HMDSoftwareUpdateModel : HMDBackingStoreModelObject {

	NSDate* _releaseDate;

}

@property (nonatomic,copy) HMFSoftwareVersion * softwareVersion; 
@property (nonatomic,copy) NSNumber * state; 
@property (nonatomic,copy) NSNumber * downloadSize; 
@property (nonatomic,copy) NSNumber * installDuration; 
@property (nonatomic,copy) HMSoftwareUpdateDocumentationMetadata * documentationMetadata; 
@property (nonatomic,copy) NSDate * releaseDate;                                                       //@synthesize releaseDate=_releaseDate - In the implementation block
+(id)properties;
-(NSDate *)releaseDate;
-(void)setReleaseDate:(NSDate *)arg1 ;
@end

