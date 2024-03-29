/*!
 PathFormatter.h
 Woosmap Indoor
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "RouteTag.h"
/**
 *  Describes the drawing style of path.
 */
@interface PathFormatter : NSObject{
    
}
/**
 *  Sets the color of the path.
 */
@property (nonatomic,retain) UIColor *pathColor;

/**
 *  Sets the color of the path which already covered.
 */
@property (nonatomic,retain) UIColor *pathPastColor;

/**
 *  Sets the thickness of the path.
 */
@property (nonatomic,retain) NSNumber *pathWidth;
/**
 *  Sets the border color for the path.
 */
@property (nonatomic,retain) UIColor *borderColor;
/**
 *  Sets the border thickness for the path.
 */
@property (nonatomic,retain) NSNumber *borderWidth;
/**
 *  Sets the color of the selected path.
 */
@property (nonatomic,retain) UIColor *selectedPathColor;

/**
 *  Sets the width of the selected path.
 */
@property (nonatomic,retain) NSNumber *selectedPathWidth;

/**
 *  Adds the collection of RouteTag associated with this path.
 */
@property (nonatomic,retain) NSArray<RouteTag*> *routeTag;

/**
 *  Setting navigation arrow head on map UI.
 */
@property (nonatomic,retain) UIImage *navigationHeadMarker;

/**
 *  Manage visibility of arrow head on last step of navigation path
 */
@property (nonatomic,readwrite) BOOL hideNavigationHeadMarkerOnLastStep;

@end
