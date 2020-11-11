/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:33 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {

	NSNumber* _errorCode;
	NSString* _errorDomain;

}

@property (nonatomic,readonly) NSString * errorDomain;              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) NSNumber * errorCode;                //@synthesize errorCode=_errorCode - In the implementation block
-(id)name;
-(void)dealloc;
-(id)payload;
-(NSString *)errorDomain;
-(NSNumber *)errorCode;
-(id)initWithContainerIdentifier:(id)arg1 error:(id)arg2 ;
@end
