/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:13:05 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableArray, CoreDAVLeafItem, NSMutableSet, CoreDAVErrorItem, CoreDAVItemWithHrefChildItem, CoreDAVMatchResultsItem;

@interface CoreDAVResponseItem : CoreDAVItem {

	NSMutableArray* _hrefs;
	CoreDAVLeafItem* _status;
	NSMutableSet* _propStats;
	CoreDAVErrorItem* _errorItem;
	CoreDAVLeafItem* _responseDescription;
	CoreDAVItemWithHrefChildItem* _location;
	CoreDAVLeafItem* _serverUID;
	CoreDAVMatchResultsItem* _matchResults;

}

@property (nonatomic,retain) NSMutableArray * hrefs;                               //@synthesize hrefs=_hrefs - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSMutableSet * propStats;                             //@synthesize propStats=_propStats - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * errorItem;                         //@synthesize errorItem=_errorItem - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * responseDescription;                //@synthesize responseDescription=_responseDescription - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) CoreDAVLeafItem * serverUID;                          //@synthesize serverUID=_serverUID - In the implementation block
@property (nonatomic,retain) CoreDAVMatchResultsItem * matchResults;               //@synthesize matchResults=_matchResults - In the implementation block
+(id)copyParseRules;
-(id)description;
-(id)init;
-(CoreDAVLeafItem *)status;
-(void)setStatus:(CoreDAVLeafItem *)arg1 ;
-(CoreDAVItemWithHrefChildItem *)location;
-(void)setLocation:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(id)successfulPropertiesToValues;
-(NSMutableArray *)hrefs;
-(id)firstHref;
-(CoreDAVErrorItem *)errorItem;
-(NSMutableSet *)propStats;
-(CoreDAVLeafItem *)responseDescription;
-(CoreDAVLeafItem *)serverUID;
-(CoreDAVMatchResultsItem *)matchResults;
-(void)addHref:(id)arg1 ;
-(void)addPropStat:(id)arg1 ;
-(void)setErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)setResponseDescription:(CoreDAVLeafItem *)arg1 ;
-(void)setServerUID:(CoreDAVLeafItem *)arg1 ;
-(void)setMatchResults:(CoreDAVMatchResultsItem *)arg1 ;
-(void)setPropStats:(NSMutableSet *)arg1 ;
-(void)setHrefs:(NSMutableArray *)arg1 ;
-(BOOL)hasPropertyError;
@end

