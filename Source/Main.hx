package;


import flash.Lib;
import ru.stablex.ui.UIBuilder;


class Main {


	public static function main() {
		 UIBuilder.init();
		 Lib.current.addChild( UIBuilder.buildFn('first.xml')() );
	}


}
