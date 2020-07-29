# Flightmap Navigation SDK for iOS
Flightmap Navigation gives you all the tools you need to add turn-by-turn navigation to your iOS application.
Get up and running in a few minutes with our drop-in turn-by-turn navigation NavigationViewController, or build a completely custom turn-by-turn navigation app with our core components for routing and navigation.

# Integrating the Navigation SDK into your project
To integrate Flightmap Navigation SDK into your project you’ll need a set of dependency frameworks which can be found here (https://drive.google.com/file/d/1F2ncN5pLAJkSEQ8nKwJzjyh853JEu5-j/view?usp=sharing).
In order to initialize the NavigationMapView and fm_token along with a style URL is needed. If you already have an fm_token you can set it using <br/>
```MGLAccountManagaer.accessToken = <your_fm_token> ```
otherwise you can register at our website (https://app.flightmap.io/v2/) and generate your fm_token.
Once the access token is set you can initialize the NavigationMapView via the initializer NavigationMapView(frame: CGRect, styleURL: String). Initially you may provide the default **(https://maps.flightmap.io/styles//default.json)** style URL.
In order to generate route details, you’ll need origin and destination coordinates. The route object is generated via the function <br/>
```Directions.shared.calculate(_ routeOptions: NavigationRouteOptions).```
 
 
 
 # To create NavigationRouteOptions:
 ```
let origin = Waypoint(coordinate: origin, coordinateAccuracy: -1, name: "Start")
let destination = Waypoint(coordinate: destination, coordinateAccuracy: -1, name: "Finish")
 // Specify that the route is intended for automobiles avoiding traffic
let routeOptions = NavigationRouteOptions(waypoints: [origin, destination], profileIdentifier: .automobileAvoidingTraffic)
```
Once the routeOptions are generated, you can pass them to the calculate Directions.shared.calculate(routeOptions) method and draw the route on the basis of response.<br/>
![Optional Text](../master/example/route.gif)
 
 # Start Navigation
To start the navigation process make sure the route and routeOptions aren’t nil.
 ```
guard let route = route, let routeOptions = routeOptions else { return }
let navigationViewController = NavigationViewController(for: route, routeOptions: routeOptions)
navigationViewController.modalPresentationStyle = .fullScreen
self.present(navigationViewController, animated: true, completion: nil)
```
![Optional Text](../master/example/nav.gif)
 
