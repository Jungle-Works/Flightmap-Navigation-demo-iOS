
import UIKit
import Mapbox

class LoginViewController: UIViewController {

    // MARK: Outlets
    @IBOutlet weak var tokenTextField: UITextField!
    @IBOutlet weak var loginButton: UIButton!
    @IBOutlet weak var getAccessTokenButton: UIButton!

    // MARK: Properties


    // MARK: Life Cycle
    override func viewDidLoad() {
        super.viewDidLoad()
        setupStrings()
        setupViews()
    }


    // MARK: Methods

    private func setupViews() {
        self.navigationController?.isNavigationBarHidden = true
    }
    private func setupStrings() {
    //        tokenTextField.placeholder = TEXT.placeholder_login
    //        getAccessTokenButton.setTitle(TEXT.getAccessToken_login, for: .normal)
    }

    /// Check access token validity
    private func isAccessTokenValid() -> Bool {
        return !tokenTextField.text!.isEmpty
    }

    private func pushToHome() {
        let storyboard = UIStoryboard(name: "Main", bundle: nil)
        let viewController = storyboard.instantiateViewController(identifier: "HomeViewController")
        self.navigationController?.pushViewController(viewController, animated: true)

    }

    // MARK: Action
    @IBAction func loginAction(_ sender: Any) {
        if self.isAccessTokenValid() {
            MGLAccountManager.accessToken = tokenTextField.text
            self.pushToHome()
        } else {
            /// Show alert for invalid token
        }
    }

    @IBAction func getAccessToken(_ sender: Any) {
        if let url = URL(string: "https://app.flightmap.io") {
            UIApplication.shared.open(url, options: [:], completionHandler: nil)
        }
    }
}
