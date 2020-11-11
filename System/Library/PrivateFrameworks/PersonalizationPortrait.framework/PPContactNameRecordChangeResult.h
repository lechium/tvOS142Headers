/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:15:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface PPContactNameRecordChangeResult : NSObject <NSSecureCoding, NSCopying> {

	BOOL _changesTruncated;
	NSArray* _changes;

}

@property (nonatomic,readonly) NSArray * changes;                  //@synthesize changes=_changes - In the implementation block
@property (nonatomic,readonly) BOOL changesTruncated;              //@synthesize changesTruncated=_changesTruncated - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactNameRecordChangeResultWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)changes;
-(BOOL)changesTruncated;
-(id)initWithChanges:(id)arg1 changesTruncated:(BOOL)arg2 ;
-(BOOL)isEqualToContactNameRecordChangeResult:(id)arg1 ;
@end

