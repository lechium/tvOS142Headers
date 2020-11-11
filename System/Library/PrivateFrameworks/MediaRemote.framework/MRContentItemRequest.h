/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:12:36 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class MRContentItem, MRPlaybackQueueRequest;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	MRContentItem* _item;
	MRPlaybackQueueRequest* _request;

}

@property (nonatomic,retain) MRContentItem * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MRPlaybackQueueRequest * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(MRPlaybackQueueRequest *)request;
-(void)setItem:(MRContentItem *)arg1 ;
-(MRContentItem *)item;
-(void)setRequest:(MRPlaybackQueueRequest *)arg1 ;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
@end
