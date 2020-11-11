/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:21:43 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKURLRequestOperation.h>

@interface TVHKMediaServerIsAvailableOperation : TVHKURLRequestOperation {

	BOOL _available;

}

@property (assign,getter=isAvailable,nonatomic) BOOL available;              //@synthesize available=_available - In the implementation block
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isAvailable;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
-(void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3 ;
-(id)initWithBaseURL:(id)arg1 accessMode:(unsigned long long)arg2 homeSharingGroupIdentifier:(id)arg3 ;
@end
