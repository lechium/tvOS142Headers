/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:20:09 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_nw_activity;
@class NSObject;

@interface CMSNetworkActivity : NSObject <NSSecureCoding> {

	BOOL _completed;
	unsigned _label;
	NSObject*<OS_nw_activity> _nwActivity;

}

@property (nonatomic,readonly) unsigned label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_nw_activity> nwActivity;              //@synthesize nwActivity=_nwActivity - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_nw_activity>)nwActivity;
-(unsigned)label;
-(void)associateWithTask:(id)arg1 ;
-(id)initWithLabel:(unsigned)arg1 parentActivity:(id)arg2 ;
-(void)completeActivity:(int)arg1 ;
-(id)initWithRetry:(id)arg1 ;
-(id)initWithLabel:(unsigned)arg1 parentUUID:(id)arg2 ;
@end

