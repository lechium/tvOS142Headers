/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:21 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, SHSignature;

@interface SHMatch : NSObject <NSSecureCoding> {

	NSArray* _mediaItems;
	SHSignature* _signature;

}

@property (nonatomic,readonly) NSArray * mediaItems;                 //@synthesize mediaItems=_mediaItems - In the implementation block
@property (nonatomic,readonly) SHSignature * signature;              //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SHSignature *)signature;
-(NSArray *)mediaItems;
-(id)initWithMediaItems:(id)arg1 forSignature:(id)arg2 ;
-(BOOL)containsMediaItemWithFuzzyTolerance:(id)arg1 ;
@end
