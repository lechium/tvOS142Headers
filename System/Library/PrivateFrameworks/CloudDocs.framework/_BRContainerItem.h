/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:17:00 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudDocs/CloudDocs-Structs.h>
#import <CloudDocs/BRQueryItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSSet;

@interface _BRContainerItem : BRQueryItem <NSSecureCoding, NSCopying> {

	NSString* _containerID;
	NSSet* _containerClientIDs;
	NSString* _localizedName;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithQueryItem:(id)arg1 container:(id)arg2 zoneRowID:(id)arg3 ;
@end

