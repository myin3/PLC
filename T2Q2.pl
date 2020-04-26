local($x) = "globalx";
local($y) = "globaly";
local($z) = "globalz";

#dynamic scoping

my($h, $j, $k);
$h = 50;
$j = 51;
$k = 52;

dynamic1();



static1();

sub dynamic1 {
    print "dynamic1";
    local($a, $b, $c);
    $a = "sub1a", $b = "sub1b", $c = "sub1c";
    
    dynamic2();

}

sub dynamic2 {
    print "dynamic2";
    local($v, $w, $x);
    $v = "sub2v", $w = "sub2w", $x = "sub2x";
    
    dynamic3();
}

sub dynamic3 {
    print "dynamic3\n";
    local($b, $y, $d);
    $b = "sub3b", $y = "sub3y", $d = "sub3d";
    print "Dynamic Scoping: z = $z\na = $a\nb = $b\nc = $c\nv = $v\nw = $w\nx = $x\ny = $y\nd = $d"

}

sub static1{
    
    my($h);
    $h = 4;
    static2();
}

sub static2{
    my($s);
    $s = $h;
    print "\nStatic Scoping: $s\n"
}




