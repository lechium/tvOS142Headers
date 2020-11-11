/*
                       * This header is generated by classdump-dyld 1.5
                       * on Tuesday, November 10, 2020 at 10:14:17 PM Mountain Standard Time
                       * Operating System: Version 14.2 (Build 18K57)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKAnnotationPrivate;
@class CLLocation, CLHeading, NSString;

@interface MKUserLocationInternal : NSObject {

	CLLocation* fixedLocation;
	CLLocation* predictedLocation;
	CLHeading* heading;
	NSString* title;
	NSString* subtitle;
	id<MKAnnotationPrivate> _annotation;
	double timestamp;
	BOOL updating;
	double course;
	id<MKAnnotationPrivate> annotation;

}

@property (nonatomic,retain) CLLocation * fixedLocation; 
@property (nonatomic,retain) CLLocation * predictedLocation; 
@property (nonatomic,retain) CLHeading * heading; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * subtitle; 
@property (nonatomic,readonly) id<MKAnnotationPrivate> annotation; 
@property (assign,nonatomic) double timestamp; 
@property (assign,getter=isUpdating,nonatomic) BOOL updating; 
@property (assign,nonatomic) double course; 
-(double)timestamp;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setTimestamp:(double)arg1 ;
-(id<MKAnnotationPrivate>)annotation;
-(CLHeading *)heading;
-(void)setCourse:(double)arg1 ;
-(double)course;
-(void)setHeading:(CLHeading *)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)isUpdating;
-(void)setFixedLocation:(CLLocation *)arg1 ;
-(CLLocation *)predictedLocation;
-(void)setPredictedLocation:(CLLocation *)arg1 ;
-(CLLocation *)fixedLocation;
@end

