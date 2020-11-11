/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:39 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PSYTestInput : NSObject <NSSecureCoding> {

	long long _action;

}

@property (assign,nonatomic) long long action;              //@synthesize action=_action - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)testInputWithAction:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
@end
