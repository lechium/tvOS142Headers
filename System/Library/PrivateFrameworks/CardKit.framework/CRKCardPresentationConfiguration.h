/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:16:46 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CRSCardRequest;

@interface CRKCardPresentationConfiguration : NSObject {

	BOOL _respectsUserConsent;
	BOOL _loadsBundleProviders;
	CRSCardRequest* _cardRequest;

}

@property (nonatomic,readonly) CRSCardRequest * cardRequest;              //@synthesize cardRequest=_cardRequest - In the implementation block
@property (nonatomic,readonly) id<CRContent> content; 
@property (assign,nonatomic) BOOL respectsUserConsent;                    //@synthesize respectsUserConsent=_respectsUserConsent - In the implementation block
@property (assign,nonatomic) BOOL loadsBundleProviders;                   //@synthesize loadsBundleProviders=_loadsBundleProviders - In the implementation block
-(id<CRContent>)content;
-(id)initWithCard:(id)arg1 ;
-(id)initWithContent:(id)arg1 ;
-(CRSCardRequest *)cardRequest;
-(id)initWithCardRequest:(id)arg1 ;
-(BOOL)loadsBundleProviders;
-(BOOL)respectsUserConsent;
-(void)setRespectsUserConsent:(BOOL)arg1 ;
-(void)setLoadsBundleProviders:(BOOL)arg1 ;
@end

