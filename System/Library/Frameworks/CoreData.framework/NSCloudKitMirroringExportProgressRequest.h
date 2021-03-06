/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:10:34 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSCloudKitMirroringRequest.h>

@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest {

	NSSet* _objectIDsToFetch;

}

@property (nonatomic,copy) NSSet * objectIDsToFetch;              //@synthesize objectIDsToFetch=_objectIDsToFetch - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setObjectIDsToFetch:(NSSet *)arg1 ;
-(NSSet *)objectIDsToFetch;
@end

