#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QLabel>
#include <QWidget>

int main(int argc, char *argv[])
{
		QApplication app(argc, argv);

		QWidget window;
		window.resize(200, 200);

		QPushButton ok("OK", &window);
		QLabel hello("Hello", &window);
		QFont the_font("Times", 18, QFont::Bold);
		ok.setFont(the_font);
		hello.setFont(the_font);
		ok.setGeometry(10, 80, 180, 40);
		hello.setGeometry(10, 40, 180, 40);
		QObject::connect(&ok, SIGNAL(clicked()), &app, SLOT(quit()));

		window.show();
		return app.exec();
}
