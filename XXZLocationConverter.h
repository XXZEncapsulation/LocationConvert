//
//  XXZLocationConverter.h
//  JiaKe
//
//  Created by Jiayu_Zachary on 15/11/12.
//  Copyright © 2015年 rihou. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>

@interface XXZLocationConverter : NSObject

/*!
 *  判断是否在中国
 */
+ (BOOL)isLocationOutOfChina:(CLLocationCoordinate2D)location;

/*!
 *  将WGS-84转为GCJ-02(火星坐标):
 */
+ (CLLocationCoordinate2D)transformFromWGSToGCJ:(CLLocationCoordinate2D)wgsLoc;

/*!
 *  将GCJ-02(火星坐标)转为百度坐标:
 */
+ (CLLocationCoordinate2D)transformFromGCJToBaidu:(CLLocationCoordinate2D)p;

/*!
 *  将百度坐标转为GCJ-02(火星坐标):
 */
+ (CLLocationCoordinate2D)transformFromBaiduToGCJ:(CLLocationCoordinate2D)p;

/*!
 *  将GCJ-02(火星坐标)转为WGS-84:
 */
+ (CLLocationCoordinate2D)transformFromGCJToWGS:(CLLocationCoordinate2D)p;

@end
